#include <iostream> #include <iomanip>  // needed to use manipulators with parameters (precision, width) #include <cmath>! // needed for pow function using namespace std; int main () { !const int beginvalues = -10; !const int endvalues = 16; !const int nvalues = endvalues - beginvalues; ! !int ipow[nvalues]; ! !double ary[nvalues]; !// an array for demo values ! !int ipowindex = 0; !// fill array with interesting range of values !for (int i = beginvalues; i < endvalues; i++) { !!ipow[ipowindex] = i; !!ary[ipowindex] = pow(3.14159265, i); !!ipowindex++; !!} !! !// output index and array[index] using default settings !cout << "Output using default settings" << endl; !for (int i = 0; i < nvalues; i++) !!cout << ipow[i] << ' ' << ary[i] << endl; 