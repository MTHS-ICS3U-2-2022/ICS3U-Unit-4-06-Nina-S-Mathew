// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: Mar 29, 2023
// This program guesses a number

#include <stdio.h>


int main() {
    // This functions uses RGB values

int r_Value = 0;
int g_Value = 0;
int b_Value = 0;

    for (int r_Value = 0; r_Value < 256; r_Value++) {
        for (int g_Value = 0; g_Value < 256; g_Value++) {
            for (int b_Value = 0; b_Value < 256; b_Value++) {
                printf("RGB(%d,%d,%d)\n", r_Value, g_Value, b_Value);
            }
        }
    }

    printf("\nDone.\n");
    return 0;
    }
