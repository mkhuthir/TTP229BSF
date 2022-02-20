/* 
 *  Muthanna Alwahash 2022
 *
 */
//------------------------------------------------------------------------------------------------------------

#ifndef _ttp229_h_
#define _ttp229_h_

//------------------------------------------------------------------------------------------------------------
class TTP229 {
    public:
        TTP229(
            // MCU Pins Selection
            int pinSCL = 8,   // Serial Clock Pin - Default is 8
			int pinSDO = 9    // Serial Data Output Pin - Default is 9
        );

        byte getKeys(void);

    private:
        int _pinSCL;           // Serial Clock Pin
        int _pinSDO;           // Serial Data Output Pin
};

//------------------------------------------------------------------------------------------------------------


#endif