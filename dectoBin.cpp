#include <iostream>
using namespace std;
void decToBin(unsigned int x);

void decToBin(unsigned int x){
    int binaryNum[32]; //array to represent 32 bits of binary code

    int i = 0;
    //loop to modulo the int then divide it and print array in reverse order
    while (x > 0){
        binaryNum[i] = x % 2;
        x = x / 2;
        i++;
    }
    for (int j = i-1; j>= 0; j--)
        cout << binaryNum[j];
}

int main(){
    cout << "Enter number that is greater than or less than 0" <<endl;
    int x;
    cin >> x;
    decToBin(x);
    return 0;

}