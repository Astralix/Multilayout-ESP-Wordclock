#pragma once

#include "DE11x11.hpp"

/*
 *           Layout Front
 *                COL
 *       X 9 8 7 6 5 4 3 2 1 0
 * ROW + - - - - - - - - - - -
 *  0  | E S K I S T A F Ü N F
 *  1  | Z E H N Z W A N Z I G
 *  2  | D R E I V I E R T E L
 *  3  | N A C H B E T T V O R
 *  4  | H A L B Q Z W Ö L F P
 *  5  | E L F M A H L V I E R
 *  6  | Z W E I N S I E B E N
 *  7  | K A F F E E X Z E I T
 *  8  | K D R E I R H F Ü N F
 *  9  | A C H T Z E H N E U N
 *  X  | B S E C H S F M U H R
 */

class De11x11V4_t : public De11x11_t {
public:
    void show(FrontWord word) override {
        switch (word) {

        case FrontWord::es_ist:
            // Es
            setFrontMatrixWord(0, 9, 10);
            // Ist
            setFrontMatrixWord(0, 5, 7);
            break;

        case FrontWord::nach:
            setFrontMatrixWord(3, 7, 10);
            break;

        case FrontWord::vor:
            setFrontMatrixWord(3, 0, 2);
            break;

        case FrontWord::viertel:
            setFrontMatrixWord(2, 0, 6);
            break;

        case FrontWord::dreiviertel:
            setFrontMatrixWord(2, 0, 10);
            break;

        case FrontWord::min_5:
            setFrontMatrixWord(0, 0, 3);
            break;

        case FrontWord::min_10:
            setFrontMatrixWord(1, 7, 10);
            break;

        case FrontWord::min_20:
            setFrontMatrixWord(1, 0, 6);
            break;

        case FrontWord::halb:
            setFrontMatrixWord(4, 7, 10);
            break;

        case FrontWord::eins:
            setFrontMatrixWord(6, 5,  8);
            break;

        case FrontWord::uhr:
            setFrontMatrixWord(10, 0, 2);
            break;

        case FrontWord::v_nach:
            setFrontMatrixWord(3, 7, 10);
            break;

        case FrontWord::v_vor:
            setFrontMatrixWord(3, 0, 2);
            break;

        case FrontWord::hour_1:
            setFrontMatrixWord(6, 6, 8);
            break;

        case FrontWord::hour_2:
            setFrontMatrixWord(6, 7, 10);
            break;

        case FrontWord::hour_3:
            setFrontMatrixWord(8, 6, 9);
            break;

        case FrontWord::hour_4:
            setFrontMatrixWord(5, 0, 3);
            break;

        case FrontWord::hour_5:
            setFrontMatrixWord(8, 0, 3);
            break;

        case FrontWord::hour_6:
            setFrontMatrixWord(10, 5, 9);
            break;

        case FrontWord::hour_7:
            setFrontMatrixWord(6, 0, 5);
            break;

        case FrontWord::hour_8:
            setFrontMatrixWord(9, 7, 10);
            break;

        case FrontWord::hour_9:
            setFrontMatrixWord(9, 0, 3);
            break;

        case FrontWord::hour_10:
            setFrontMatrixWord(9, 3, 6);
            break;

        case FrontWord::hour_11:
            setFrontMatrixWord(5, 8, 10);
            break;

        case FrontWord::hour_12:
            setFrontMatrixWord(4, 1, 5);
            break;
#if 0
        case FrontWord::funk:
            setFrontMatrixWord(10, 3, 6);
            break;
#endif
        default:
            break;
        };
    };
};

De11x11V4_t _de11x11V4;