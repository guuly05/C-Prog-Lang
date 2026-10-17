#include <stdio.h>

int main()
 {
    // Constants
    const double GRAVITY = 9.80; // gravitational constant in meters/second^2
    const double EFFICIENCY = 0.90; // 90% efficiency
    const double MASS_PER_CUBIC_METER = 1000.0; // mass of one cubic meter of water in kg
    const double MW_CONVERSION = 1e6; // 1 megawatt = 10^6 watts

    // Variables
    double height, flowRate, powerOutput;

    // Prompt the user for input
    printf("Enter the height of the dam (in meters): ");
    scanf("%lf", &height);
    printf("Enter the flow rate of water (in cubic meters per second): ");
    scanf("%lf", &flowRate);

    // Calculate the mass flow rate (kg/s)
    double massFlowRate = flowRate * MASS_PER_CUBIC_METER;

    // Calculate the potential energy per second (work done by gravity)
    double potentialEnergyPerSecond = massFlowRate * GRAVITY * height;

    // Calculate the power output in watts, considering the efficiency
    powerOutput = potentialEnergyPerSecond * EFFICIENCY;

    // Convert power output to megawatts
    powerOutput /= MW_CONVERSION;

    // Display the result
    printf("The power output is %.2f megawatts.\n", powerOutput);
u
    return 0;
}
