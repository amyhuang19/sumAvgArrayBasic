#include <stdio.h> //include statment for standard libraries
#include <stdlib.h>  //to use atoi
//function prototypes
int computeSum(int length, int intArray[]);
int computeAvg(int length, int sum);

/** main method: Write a program that calculates the sum and average of an array of integers, and create a separate function to compute each. 
usage of sumAvgArray.c: 	./sumAvgArray.out 1 2 3		<- length 4, indexes 0-3
*/ 
int main(int argc, char *argv[]) { //takes in input of at least length/argc 2
	if(argc >= 2) { //if correct number of command line args
		//need to take in integers, makes an array
		int intArray[64] = {0}; //initialize array of size 64
		int length = 0;
		for (int i = 1; i < argc; i++) { //go through all cmd line values
			int eachInt = atoi(argv[i]); //get each int to place into array
			intArray[length] = eachInt; //set 
			length++;
		} //set array values

		//print array values
		printf("[");
		for (int i = 0; i < length; i++) {
			if (i == length - 1) { //if at end of array
				printf("%d", intArray[i]); //print formatted
			} else { //not at end of array
				printf("%d, ", intArray[i]); //print formatted
			} //if
		} //for
		printf("] \n");

		//calculate w/ functs
		int sumOutCome = computeSum(length, intArray); //get sum
		printf("sum: %d \n", sumOutCome); //print sum
		int avgOutCome = computeAvg(length, sumOutCome); //get sum
		printf("avg: %d \n", avgOutCome); //print sum
	} else {
		printf("Incorrect number of cmd line inputs. \n");
		return 1; //return main on error
	} //if
} //main

//function implementation
/** Function computeSum computes the sum. */
int computeSum(int length, int intArray[]) {
	int sum = 0; //intialize sum
	for (int i = 0; i < length; i++) { //go through array
		sum = sum + intArray[i]; //add
	} //for
	return sum; //return sum
} //computeSum

/** Function computeAvg computes the avg. */
int computeAvg(int length, int sum) {
	return sum/length; //calcuates/retuns the avg
} //computeAvg