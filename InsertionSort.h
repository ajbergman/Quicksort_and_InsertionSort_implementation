/**
 * Insertion Sort
 * Written by Alex Bergman, Oct 2014
 */
#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_
#include <vector>
using namespace std;

long long insertionSort(vector<int>& vec){

	long long numOfCompares = 0;
	int temp= 0;

	for (int cnt1 = 1; cnt1 < vec.size(); cnt1++){

		for (int cnt2 = cnt1; cnt2 >= 1; cnt2--){
			numOfCompares++;
			if( vec[cnt2] > vec[cnt2-1] ){
				//insert
				break;
			} else {
				//move and continue
				temp = vec[cnt2];
				vec[cnt2] = vec[cnt2-1];
				vec[cnt2-1] = temp;
			}

		}

	}

	return numOfCompares;
}

#endif
