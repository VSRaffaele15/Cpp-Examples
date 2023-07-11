#include <iostream>

class Cell {
    public:
        Cell() {
            tilefillx = 1;
            tilefilly = 1;
        }
        int tilefillx;
        int tilefilly;
        int AreaFillCalc() {
            return tilefillx * tilefilly;
        }
};

class Map {
    public:
        Map() {
            sizex = 1;
            sizey = 1;
        }
        int sizex;
        int sizey;
        int SizeCalc() {
            return sizex * sizey;
        }
};

main() {
    Cell cell;
    Map tilecells;
    cell.tilefillx = 1;
    cell.tilefilly = 1;
    tilecells.sizex = 50;
    tilecells.sizey = 50;
    int cellcalc = cell.AreaFillCalc();
    int tilecellscalc = tilecells.SizeCalc();
    printf("%d", cellcalc);
    printf("%d", tilecellscalc);
};