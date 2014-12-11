/**
 * Verify vector is sorted
 * Written by Alex Bergman, Oct 2014
 */

#ifndef _VERIFYSORT_H_
#define _VERIFYSORT_H_
#include <vector>
using namespace std;

int verifySort(vector<int> vec){

	for(int i =0; i < (vec.size() - 1); i++){
		if( vec[i] > vec[i+1] )
			return false;
	}
	return true;
}


#endif
