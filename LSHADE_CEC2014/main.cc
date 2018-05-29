#include "de.h"
#include <string>
#include <iostream>
void arc_read_error(){
    cout<<"expected parameters: [number of runs - positive int] [dimension size- positive int] [memory size- positive int] [archive rate - positive double] [p rate - positive double]\n";
    exit(1);
}
int main(int argc, char ** argv){
    /*if(argc != 6)
        arc_read_error();
    int number_of_runs = atoi(argv[1]);
    int dimension_size = atoi(argv[2]);
    int memory_size = atoi(argv[3]);
    double archive_rate = atof(argv[4]);
    double p_rate = atof(argv[5]);
    if(number_of_runs == 0 || dimension_size == 0 || memory_size == 0 || archive_rate == 0 || p_rate == 0)
        arc_read_error();*/

    int dimentions[4] = {10,30,50,100};

    for(int d = 0; d < 4 ; ++d) {
        for (int i = 2; i <= 10; i = i + 3) // memory_size
        {
            for (double j = 1.0; j <= 3.0; j = j + 0.6) // archive_rate
            {
                for (double k = 0.05; k <= 0.15; k = k + 0.03) // p_rate
                {
                    for (int z = 15; z <= 25; z = z + 3) // n_init
                    {

                        string fileName =
                                string("results/result_for_") +
                                string(std::to_string(dimentions[d])) + string("_dimension_") +
                                string(std::to_string(i)) + string("_memory_size_") +
                                string(std::to_string(j)) + string("_archive_rate_") +
                                string(std::to_string(k)) + string("_p_rate_") +
                                string(std::to_string(z)) + string("_n_init_") +
                                string(".txt");
                        //file.open(fileName.c_str(),ios::out);
                        //file<< setprecision(12);
                        //cout<<fileName<<"\n";
                        LSHADE_main(1, dimentions[d], i, j, k, z, fileName);
                        //file.close();
                    }
                }
            }
        }
    }
}