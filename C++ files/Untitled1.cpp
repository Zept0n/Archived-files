#include <vector>
int grow(std::vector<int> nums) {
  int size=nums.size();
  int mult=1;
  for (int i=1;i<size;i++){
      mult*=nums[i];
  return mult;
}

int main(){
	grow(vec{1, 2, 3})
	getch();
	return 0;
}
