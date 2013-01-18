#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdint.h>

#include <Motor/CRD514KD.h>
#include <ModbusController/ModbusController.h>

/**
 * Print values of registers in the given range (inclusive range. Max address is also dumped!)
 *
 * uint16_t motorID		ID of the motor to be printed. 0 = broadcast, 1 = MOTOR_1, 2 = MOTOR_2, 3 = MOTOR_3
 * uint32_t minAddress	Start address of the registers
 * uint32_t maxAddress	Last address of the registers
 */
void printRegisterValues(ModbusController::ModbusController* modbus, uint16_t motorID, uint32_t minAddress, uint32_t maxAddress){
	if(modbus == NULL){
		std::cerr << "No modbus connection!" << std::endl;
		return;
	}

	for(uint32_t address = minAddress; address <= maxAddress; ++address){
		std::cout << std::hex << address << " " << std::dec << modbus->readU16(motorID, address) << std::endl;
	}
}

/**
 * int destinationAdress (0 = all motors, 1 is motor 1 etc...)
 * fileName in current directory!
 */
void writeRegisterValues(ModbusController::ModbusController* modbus, char *inputFileName, int destinationAdress){
	if(modbus == NULL){
		std::cerr << "No modbus connection!" << std::endl;
		//return;
	}

	std::string line;
	std::vector<std::string> fileLines;
	int motorIndex = 0;
	std::ifstream myFile (inputFileName);

	if(myFile.is_open())
	{
		while(myFile.good())
		{
			getline (myFile, line);
			fileLines.push_back(line);
		}
	}
	else
	{
		std::cout << "Unable to open file." << std::endl;
	}

	for(int i = 1; i < (int)fileLines.size(); i++)//i=1 -> Skips first line
	{

		std::string buf;
		std::stringstream ss(fileLines[i]);
		std::vector<std::string> tokens;

		while(ss >> buf)
		{
			tokens.push_back(buf);
		}
		if(tokens.size() == 0)
			continue;

		if(!tokens[0].compare("Motor"))
		{
			motorIndex = atoi(tokens[1].c_str());
			std::cout << "MotorIndex Switched!" << motorIndex << std::endl;
		}
		else if(destinationAdress == 0 || motorIndex == destinationAdress)
		{
			std::stringstream converter(tokens[0].c_str());
			unsigned int address;
			converter >> std::hex >> address;

			std::cout << address << " " << atoi(tokens[1].c_str()) << std::endl;
			modbus->writeU16(motorIndex, address, atoi(tokens[1].c_str()),false);
		}
	}
	if(destinationAdress == 0)
	{
		modbus->writeU16(1, 0x45, 0x1, false); //Saving operation.
		modbus->writeU16(2, 0x45, 0x1, false); //Saving operation.
		modbus->writeU16(3, 0x45, 0x1, false); //Saving operation.
	}
	else
	{
		modbus->writeU16(destinationAdress, 0x45, 0x1, false); //Saving operation.
	}
}
int main() {
	std::cout << "Addr Value" << std::endl;

	ModbusController::ModbusController* modbus = new ModbusController::ModbusController(modbus_new_rtu(
        "/dev/ttySNX0",
        Motor::CRD514KD::RtuConfig::BAUDRATE,
        Motor::CRD514KD::RtuConfig::PARITY,
        Motor::CRD514KD::RtuConfig::DATA_BITS,
        Motor::CRD514KD::RtuConfig::STOP_BITS));

	//writeRegisterValues(modbus, (char *)"registers.dump", 3);

	std::cout << "Motor 1" << std::endl;
	printRegisterValues(modbus, 1, 0x200, 0x25C);
	printRegisterValues(modbus, 1, 0x30E, 0x31C);

	std::cout << "Motor 2" << std::endl;
	printRegisterValues(modbus, 2, 0x200, 0x25C);
	printRegisterValues(modbus, 2, 0x30E, 0x31C);

	std::cout << "Motor 3" << std::endl;
	printRegisterValues(modbus, 3, 0x200, 0x25C);
	printRegisterValues(modbus, 3, 0x30E, 0x31C);

	//modbus->writeU16(2, 0x20D, 0x1, false); //Data No. input 1=I/O
	//modbus->writeU16(2, 0x45, 0x1, false); //Saving operation.

//	modbus->writeU32(2, 0x502, 1, true);
//	modbus->writeU32(2, 0x402, 1, true);
//	modbus->writeU32(2, 0x902, 1, true);
//	modbus->writeU32(2, 0xA02, 1, true);
//
	//modbus->writeU16(1, 0x01E, (1 << 13)); //Excitation
	//modbus->writeU16(1, 0x01E, (1 << 13) | (1 << 8));
	//modbus->writeU16(1, 0x01E, (1 << 13));

//	while(true)
//	{
//		int registerStatus;
//		int indexMotor;
//		for(indexMotor = 1; indexMotor <= 3; indexMotor++)
//		{
//			std::cout << indexMotor << ": ";
//			registerStatus = modbus->readU16(indexMotor, 0x20);
//			//std::cout << registerStatus << std::endl;
//			if ( (registerStatus & 0x01) == 0 )
//			{
//				std::cout <<"Input M0: on" << std::endl;
//			}
//			else
//			{
//				std::cout << "Input M0: off" << std::endl;
//			}
//			//printRegisterValues(modbus, 1, 0x20, 0x20);
//
//		}
//		sleep(1);
//		std::cout << " " << std::endl;
//
//	}
	//printRegisterValues(modbus, 1, 0x20D, 0x20D);
	//printRegisterValues(modbus, 1, 0x20, 0x20);

	delete modbus;

	return 0;
}
