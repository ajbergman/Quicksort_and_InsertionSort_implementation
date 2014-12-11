/**
 * QuickSort
 * Written by Alex Bergman, Oct 2014
 */

#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_
#include <vector>
#include <iostream>
#include "InsertionSort.h"
using namespace std;

/* 
quickSort Algorithm 

*/
long long quickSort(vector<int>& vec, int cnt1=0, int cnt2=-2)
{
	long long compares = 0;
	if(cnt2 == -2) cnt2 = vec.size()-1;
    if ( (cnt1 < cnt2) && (vec.size() > 1) )
    {
        int  i = cnt1, j = cnt2;
        int piv = vec[cnt1];

	    while ( cnt1 < cnt2 )
	    {
	        while ( vec[cnt1] < piv ){
	            cnt1++;
	            compares++;
	        }
	        while ( vec[cnt2] > piv ){
	            cnt2--;
				compares++;
	        }
	        if ( vec[cnt1] == vec[cnt2] )
	            cnt2--;
	        else if ( cnt1 < cnt2 )
	        {
	            int temp = vec[cnt1];
	            vec[cnt1] = vec[cnt2];
	            vec[cnt2] = temp;
	        }
	    }        
        if(i < j){
	        compares += quickSort(vec, i, cnt1-1);
	        compares += quickSort(vec, cnt1+1, j);
    	}
    }
    return compares;
}

#endif
