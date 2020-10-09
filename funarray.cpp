#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string s, file1, file2;
    file1 = "oldfile.txt";
    file2 = "newfile.txt";
    try {
        std::ifstream fromf(file1);
        std::ofstream tof(file2);
        if (!fromf) throw "Can not read file";
        if (!tof) throw "Can not create file";

        while (fromf.peek() != EOF)
        {
            getline(fromf, s);
            tof << s << std::endl;
        }
        fromf.close();
        tof.close();
        std::cout << "Succesfully copied!" << std::endl;
    }
    catch (const char* error) {
        std::cout << "Error! " << error << "!" << std::endl;
        system("pause");
        return 1;
    }
    return 0;
}
