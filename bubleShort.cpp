#include <iostream>
using namespace std;


int arr[20];
int n;

void input() 
{

    while(true)
    {
    
    cout << "Input The Maximum Leght : ";
    cin >> n;

    if (n <= 20) {
        break;
    } else {
        cout << "n is bigger than 20";
    }

    }

    cout << endl;
    cout << "=========================" << endl;
    cout << " Enter Elements of Array " << endl;
    cout << "=========================" << endl;

    for(int i = 0; i < n; i++) {
        cout << "Data -" << i+1 << " : ";
        cin >> arr[i] ;
        cout << endl;
    }

}

    void bubbleShortAlgorithm() 
{
    // set pass = 1
    int pass = 1;
    // repeat step 3 varying j form 0 to n-1-pas
    do{
        for ( int j = 0; j <= n-1-pass; j++) //atau <= n-
        {
            //If the element at index j is greater than
            //j + 1, swap the two elements.
            if(arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        // Increase pass by 1.
        pass = pass + 1;
    } while (pass <= n-1); //atau pass < n  

}

void display() {

    cout << "======================" << endl;
    cout << "Data yang sudah diurut" << endl;
    cout << "======================" << endl;


    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i+1 << " : " << arr[i] << endl;
    }
    

}

int main() {
input();
bubbleShortAlgorithm();
display();
}