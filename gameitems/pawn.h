#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class pawn:public Piece
{
public:
    pawn(int color, int col, int row,  QGraphicsItem *parent = NULL);
    void setImage();
    bool canmove(int x, int y);
};

#endif // PAWN_H
