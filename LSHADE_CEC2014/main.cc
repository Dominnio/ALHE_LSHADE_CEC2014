#include "de.h"
#include <string>
#include <iostream>
void arc_read_error(){
    cout<<"expected parameters: [number of runs - positive int] [dimension size- positive int] [memory size- positive int] [archive rate - positive double] [p rate - positive double]\n";
    exit(1);
}
int main(int argc, char ** argv){
    if(argc != 6)
        arc_read_error();
    int number_of_runs = atoi(argv[1]);
    int dimension_size = atoi(argv[2]);
    int memory_size = atoi(argv[3]);
    double archive_rate = atof(argv[4]);
    double p_rate = atof(argv[5]);
    if(number_of_runs == 0 || dimension_size == 0 || memory_size == 0 || archive_rate == 0 || p_rate == 0)
        arc_read_error();


    string fileName  = string("results/result for ") + string(argv[2]) + string(" dimension.txt");
    file.open(fileName.c_str(),ios::out);
    file<< setprecision(12);
    LSHADE_main(number_of_runs,dimension_size,memory_size,archive_rate,p_rate);

    file.close();
}
