#include "solution.hpp"

int main(){

	Solution solution;
	std::vector<int> num={3,2,1,5,6,4};
	int output=solution.findKthLargest(num, 2);
	int k=2;
	std::cout<<"ANSWER ="<<output<<std::endl;

	return 0;
}
