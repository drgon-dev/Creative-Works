#include <string>

using namespace std;

int* AddNewPart(int* a,int size,int add) {
	int* temp;
	temp = new int[size+1];
	for (int i = 0; i < size; i++) 
		temp[i] = a[i];
	temp[size] = add;
	return temp;
}

std::string* AddNewPart(std::string* a, int size, string add) {
	string* temp;
	temp = new string[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = a[i];
	temp[size] = add;
	return temp;
}

float* AddNewPart(float* a, int size, float add) {
	float* temp;
	temp = new float[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = a[i];
	temp[size] = add;
	return temp;
}