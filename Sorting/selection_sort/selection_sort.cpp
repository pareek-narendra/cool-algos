#include <iostream>
#include <vector>

using namespace std;

/*
* Function to Print the sorted and unsorted Vector elements
*/
void printVector(const vector<int>& VectorElement)  
{  
    for (int i=0; i < VectorElement.size(); i++)
        cout << VectorElement[i] << " ";
} 

/*
* Selection sorting
*/
void selectionSort(vector<int>& VectorElement)  
{  
    int size = VectorElement.size();
    for (int i=0; i < size; i++){
        int min = i;
        for (int j = i+1; j < size; ++j) {
            if (VectorElement.at(min) > VectorElement.at(j)) {
                min = j;
            }
        }  
        if (min != i)
            swap(VectorElement.at(i), VectorElement.at(min));
    }
}
  
/*
* Main Function
* Allow to select array size
* Allow to select dynamic array elements
*/

int main()
{
    int size, input;
    cout << "\nEnter the size of Unsorted Array : ";
    cin >> size;
    cout << "\nEnter any " << size << " Elements for Unsorted Array: \n";
    vector<int> VectorElement;

    // Input Elements
    for (int i = 0; i < size; i++) {
        cin >> input;
        VectorElement.push_back(input);
    }
    cout << "UnSorted Elements: \n"; 
    printVector(VectorElement);
    
    selectionSort(VectorElement);  
    
    cout << "\nSorted Elements: \n";  
    printVector(VectorElement);  
    return 0;  
}