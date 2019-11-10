// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// Print integers from 1000 to 2000 with 5 integers per line

#include <iostream>
int counter = 1;

int main() {
     for (counter = 1000; counter < 2000 + 1; counter++) {
        if (counter % 5 == 0) {
            std::cout << "\n" << counter << " ";
        } else {
            std::cout << counter << " ";
        }
    }
}
