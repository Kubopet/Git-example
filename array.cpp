#include "array.h"
int max(int left,int right){
    return left > right ? left : right;
}
int min(int left,int right){
    return left < right ? left : right;
}
int min_index(int* massive,int size){
    int min_index = 0;
    for(int i = 0; i < size; i++){
        if(massive[i] < massive[min_index]){
            min_index = i;
        }
    }
    return min_index;
}
int max_index(int* massive,int size){
    int max_index = 0;
    for(int i = 0; i < size; i++){
        if(massive[i] > massive[max_index]){
            max_index = i;
        }
    }
    return max_index;
}

int sum(int* massive, int size, int begin, int end){
	int summ = 0;
	for(int i = begin; i <= end; i++){
		summ += massive[i];
	}
	return summ;
}
