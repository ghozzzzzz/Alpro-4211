#include <iostream>

bool ganjil(int num) {
    return num %2 !=0;
    }

void cetakhasil(const int arr[], int size){
    int hasil = -1;
    int hasilindex = -1;

    for (int i=0; i<size;i++){
            int num = arr[i];

                if (num%2==0){
                    if (hasil == -1 || num < hasil){
                        hasil = num;
                        hasilindex = i;
                    }
                }
            }
            if (hasilindex != -1){
                std::cout << "Ganjil terkecil : "<<hasil<<std::endl;
                std::cout << "> index :  "<<hasilindex<<std::endl;
            } else
                std::cout << "-"<<std::endl;
        }


int main(){
    int arr[]={6,7,4,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cetakhasil(arr, size);
    return 0;
}
