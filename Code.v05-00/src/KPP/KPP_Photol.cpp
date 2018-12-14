/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*                                                                  */
/*     Aircraft Plume Chemistry, Emission and Microphysics Model    */
/*                             (APCEMM)                             */
/*                                                                  */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#include <stdio.h>
#include <stdlib.h>

#include "KPP/KPP.hpp"

void Read_JRates ( double JRates[], const double CSZA )
{

    JRates[  0] = 6.863833580140807E-16 * CSZA;
    JRates[  1] = 4.963331279890740E-04 * CSZA;
    JRates[  2] = 3.572587393349306E-05 * CSZA;
    JRates[  3] = 0.000000000000000E-00 * CSZA;
    JRates[  4] = 0.000000000000000E-00 * CSZA;
    JRates[  5] = 3.732780370890147E-14 * CSZA;
    JRates[  6] = 6.691081018469171E-05 * CSZA;
    JRates[  7] = 9.626531309479235E-05 * CSZA;
    JRates[  8] = 1.169508931495838E-05 * CSZA;
    JRates[  9] = 1.028595226318751E-05 * CSZA;
    JRates[ 10] = 1.393569905839789E-02 * CSZA;
    JRates[ 11] = 2.528397217582879E-01 * CSZA;
    JRates[ 12] = 3.253242469494527E-02 * CSZA;
    JRates[ 13] = 3.997227869700702E-05 * CSZA;
    JRates[ 14] = 2.450125278441437E-03 * CSZA;
    JRates[ 15] = 9.118012660535184E-07 * CSZA;
    JRates[ 16] = 1.322855964380495E-06 * CSZA;
    JRates[ 17] = 2.513426332661996E-05 * CSZA;
    JRates[ 18] = 5.526470457004204E-05 * CSZA;
    JRates[ 19] = 1.214657762702042E-05 * CSZA;
    JRates[ 20] = 1.776647644082188E-03 * CSZA;
    JRates[ 21] = 3.932623869605524E-03 * CSZA;
    JRates[ 22] = 4.085520096630630E-02 * CSZA;
    JRates[ 23] = 4.847098124388727E-04 * CSZA;
    JRates[ 24] = 1.285568078786397E-01 * CSZA;
    JRates[ 25] = 3.126315896610954E-03 * CSZA;
    JRates[ 26] = 3.930606282345422E-04 * CSZA;
    JRates[ 27] = 6.764003208715053E-02 * CSZA;
    JRates[ 28] = 1.716329113254902E-03 * CSZA;
    JRates[ 29] = 3.028816081749160E-04 * CSZA;
    JRates[ 30] = 8.955284449676641E-03 * CSZA;
    JRates[ 31] = 3.345496469777494E-03 * CSZA;
    JRates[ 32] = 1.462841810360479E-02 * CSZA;
    JRates[ 33] = 1.335917041256398E-11 * CSZA;
    JRates[ 34] = 0.000000000000000E-00 * CSZA;
    JRates[ 35] = 1.446672202079563E-12 * CSZA;
    JRates[ 36] = 2.885494104914688E-11 * CSZA;
    JRates[ 37] = 2.324639559189999E-12 * CSZA;
    JRates[ 38] = 5.142833479308482E-12 * CSZA;
    JRates[ 39] = 2.714617708992233E-13 * CSZA;
    JRates[ 40] = 2.186723228071915E-14 * CSZA;
    JRates[ 41] = 5.124433328159379E-11 * CSZA;
    JRates[ 42] = 6.551192253348007E-13 * CSZA;
    JRates[ 43] = 4.994272678105804E-11 * CSZA;
    JRates[ 44] = 3.709043306386634E-12 * CSZA;
    JRates[ 45] = 1.180380717352806E-14 * CSZA;
    JRates[ 46] = 3.844678737995567E-12 * CSZA;
    JRates[ 47] = 6.117752454890923E-12 * CSZA;
    JRates[ 48] = 3.822067670406953E-14 * CSZA;
    JRates[ 49] = 6.893682335538920E-11 * CSZA;
    JRates[ 50] = 3.491277377800607E-09 * CSZA;
    JRates[ 51] = 3.491277377800607E-09 * CSZA;
    JRates[ 52] = 1.615230858896205E-11 * CSZA;
    JRates[ 53] = 1.700482752204339E-09 * CSZA;
    JRates[ 54] = 2.289996269751425E-09 * CSZA;
    JRates[ 55] = 1.254226712812687E-06 * CSZA;
    JRates[ 56] = 9.057379416524494E-06 * CSZA;
    JRates[ 57] = 3.765458373632343E-05 * CSZA;
    JRates[ 58] = 9.674910438507938E-07 * CSZA;
    JRates[ 59] = 1.151810585060881E-06 * CSZA;
    JRates[ 60] = 1.938505888475851E-05 * CSZA;
    JRates[ 61] = 0.000000000000000E-00 * CSZA;
    JRates[ 62] = 1.194995133177343E-05 * CSZA;
    JRates[ 63] = 3.983317109837683E-06 * CSZA;
    JRates[ 64] = 3.983317109837683E-06 * CSZA;
    JRates[ 65] = 2.676686244821567E-06 * CSZA;
    JRates[ 66] = 0.000000000000000E-00 * CSZA;
    JRates[ 67] = 2.351043510540070E-05 * CSZA;
    JRates[ 68] = 1.767365776827355E-05 * CSZA;
    JRates[ 69] = 9.047789021603271E-05 * CSZA;
    JRates[ 70] = 5.683536217517803E-04 * CSZA;
    JRates[ 71] = 1.834808801519983E-04 * CSZA;
    JRates[ 72] = 3.257702655601528E-05 * CSZA;
    JRates[ 73] = 6.076331192771653E-05 * CSZA;
    JRates[ 74] = 4.100064610348970E-06 * CSZA;
    JRates[ 75] = 1.120907774503720E-06 * CSZA;
    JRates[ 76] = 8.149764428819705E-09 * CSZA;
    JRates[ 77] = 1.028595226318751E-05 * CSZA;
    JRates[ 78] = 1.028595226318751E-05 * CSZA;
    JRates[ 79] = 5.142976131593754E-06 * CSZA;
    JRates[ 80] = 1.028595226318751E-05 * CSZA;
    JRates[ 81] = 1.028595226318751E-05 * CSZA;
    JRates[ 82] = 1.028595226318751E-05 * CSZA;
    JRates[ 83] = 1.028595226318751E-05 * CSZA;
    JRates[ 84] = 1.028595226318751E-05 * CSZA;
    JRates[ 85] = 1.028595226318751E-05 * CSZA;
    JRates[ 86] = 1.028595226318751E-05 * CSZA;
    JRates[ 87] = 1.028595226318751E-05 * CSZA;
    JRates[ 88] = 1.028595226318751E-05 * CSZA;
    JRates[ 89] = 1.028595226318751E-05 * CSZA;
    JRates[ 90] = 1.028595226318751E-05 * CSZA;
    JRates[ 91] = 4.595592296998591E-06 * CSZA;
    JRates[ 92] = 4.595592296998591E-06 * CSZA;
    JRates[ 93] = 4.595592296998591E-06 * CSZA;
    JRates[ 94] = 4.595592296998591E-06 * CSZA;
    JRates[ 95] = 4.595592296998591E-06 * CSZA;
    JRates[ 96] = 1.028595226318751E-05 * CSZA;
    JRates[ 97] = 1.151810585060881E-06 * CSZA;
    JRates[ 98] = 1.028595226318751E-05 * CSZA;
    JRates[ 99] = 0.000000000000000E-00 * CSZA;
    JRates[100] = 1.776647644082188E-03 * CSZA;
    JRates[101] = 6.143482844916239E-01 * CSZA;
    JRates[102] = 5.244341892327872E-05 * CSZA;
    JRates[103] = 4.243699140578246E-07 * CSZA;
    JRates[104] = 8.063028367437723E-06 * CSZA;

}