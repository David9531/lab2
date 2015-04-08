一開始先創立.h檔 定義所有member fuction和member data
再創立lab2main.cpp、lab2.cpp、file.in、makefile

lab2main.cpp檔
裡面包含main function此檔用於ofstream、ifstream的讀檔(file.in)和寫檔(file.out)，並計算bmi
之後再call lab2.cpp

lab2.cpp檔
此檔用於檢測bmi所在的級數，並利用call by reference回傳main function檔寫入檔案

file.in檔
裡面包含需要被讀入的基本資料

makefile檔
用於串連所有檔案
