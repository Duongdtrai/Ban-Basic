#ifndef SETUP_HPP
#define SETUP_HPP

        #include <bits/stdc++.h>
        #include "ITPlib.hpp"
        using namespace std;

            void Set_Info(Problem_Info& in4){
                in4.number_of_test_case = 15;
                in4.limit_size_of_file = 500000; //bytes
            }
            void Easy(ofstream& fout){
                int test = random(1,50);
                fout << test << endl;
                while(test--){
                    int n = random(1,100); 
                    fout << n << endl;
                    int a[n+5];
                    for(int i = 0; i < n; i++){
                        a[i] = random(1,100); 
                        fout << a[i] << " ";
                    }
                    fout << endl;
                }
            }
            void Medium(ofstream& fout){
                int test = random(1,15);
                fout << test << endl;
                while(test--){
                    int n = random(1,50);
                    fout << n << endl;
                    int a[n+5];
                    for(int i = 0; i < n; i++){
                        a[i] = random(1,1000);
                        fout << a[i] << " ";
                    }
                    fout << endl;
                }
            }
            void Hard(ofstream& fout){
                int test = random(1,5);
                fout << test << endl;
                while(test--){
                    int n = random(1,10);
                    fout << n << endl;
                    int a[n+5];
                    for(int i = 0; i < n; i++){
                        a[i] = random(1,100000-50);
                        fout << a[i] << " ";
                    }
                    fout << endl;
                }
            }
        // Nếu muốn thêm mức cực khó, bỏ cmt hàm sau và chỉnh sửa:
            // #define NIGHTMARE
            //     int quantity = 3; // Số lượng test cực khó.
            //     void NightMare(ofstream& fout){
            //         /*  Modify here  */
            //     }
            
#endif