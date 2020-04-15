//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#include <iostream>
#include "Factories/SmallMotorSystem.h"
#include "Factories/MediumMotorSystem.h"
#include "Factories/BigMotorSystem.h"
#include "Factories/IMotorSystem.h"


int main(){
    IMotorSystem* car_motor_system;

    car_motor_system = new SmallMotorSystem();
    std::cout << "Engine is " << car_motor_system->getEngine()->getHorsePower() << " horse power." << std::endl;
    std::cout << "Gearbox is " << car_motor_system->getTransmission()->getGearsNumber() << " speed." << std::endl;

    delete car_motor_system;

    car_motor_system = new MediumMotorSystem();
    std::cout << "Engine is " << car_motor_system->getEngine()->getHorsePower() << " horse power." << std::endl;
    std::cout << "Gearbox is " << car_motor_system->getTransmission()->getGearsNumber() << " speed." << std::endl;

    delete car_motor_system;

    bool with_automatic_gearbox = true;
    car_motor_system = new BigMotorSystem(with_automatic_gearbox);
    std::cout << "Engine is " << car_motor_system->getEngine()->getHorsePower() << " horse power." << std::endl;
    std::cout << "Gearbox is " << car_motor_system->getTransmission()->getGearsNumber() << " speed." << std::endl;

    delete car_motor_system;

    with_automatic_gearbox = false;
    car_motor_system = new BigMotorSystem(with_automatic_gearbox);
    std::cout << "Engine is " << car_motor_system->getEngine()->getHorsePower() << " horse power." << std::endl;
    std::cout << "Gearbox is " << car_motor_system->getTransmission()->getGearsNumber() << " speed." << std::endl;
    delete car_motor_system;

    return 0;
}