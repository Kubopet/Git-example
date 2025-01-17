#include <iostream>
#include "array.h"

int main(){
	const int size{5};
	int massive[size]{5,1,2,6,1};
	
	int i_min{}, i_max{};
	i_min = min_index(massive,size);
	i_max = max_index(massive,size);
	std :: cout << "i_min: " << i_min << "\ti_max: " << i_max << '\n';
	
	
	int _sum{};
	int begin{}, int end{};
	begin = min(i_min,i_max);
	end = max(i_max,i_min);
	_sum = sum(massive,size,begin, end);
	std :: cout << "sum: " << _sum << '\n';
	
	return 0;
}