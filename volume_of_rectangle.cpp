// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Fri/May28/2021
// This program calculates the volume of rectangular prism


#include <iostream>


int volumeRectangular(int length, int width, int height) {
    // this function calculates the volume of rectangular prism using return
    int volume;
    // process
    volume = length * width * height;
    // return
    return volume;
}

int main() {
    // this function just calls other functions
    std::string lengthFromUser;
    std::string widthFromUser;
    std::string heightFromUser;
    int length;
    int width;
    int height;
    // input
    std::cout << "To calculate the volume of rectangular prism:" << std::endl;
    std::cout << "Enter the length (cm):  ";
    std::cin >> lengthFromUser;
    std::cout << "Enter the width (cm):  ";
    std::cin >> widthFromUser;
    std::cout << "Enter the height (cm):  ";
    std::cin >> heightFromUser;
    try {
        length = std::stoi(lengthFromUser);
        width = std::stoi(widthFromUser);
        height = std::stoi(heightFromUser);
        // call functions
        volumeRectangular(length, width, height);
        // output
        std::cout << "\nvolume = " <<
        volumeRectangular(length, width, height) << "cm³" << std::endl;
        std::cout << "\nDone." << std::endl;
    }catch (std::invalid_argument) {
       std::cout << "\nInvalid Input!" << std::endl;
       std::cout << "\nDone." << std::endl;
    }
}
