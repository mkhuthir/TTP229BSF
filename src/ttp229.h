/* 
 *  Muthanna Alwahash 2020/21
 *
 */

#ifndef _ttp229_h_
#define _ttp229_h_

#define SCL 8
#define SDO 9


class TTP229 {
    public:
        void TTP229(void);
        void TTP229::getKeys(void);

};

byte Read_TTP229_Keypad(void);




#endif