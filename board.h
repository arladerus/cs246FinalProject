#ifndef __BOARD_H__
#define __BOARD_H__

class Board{
	Cell ** gameBoard;		//the board object that holds the game matrix
	Xwindows * window;		//the GUI
	int xStartPos;			//default starting location for the blocks
	int yStartPos;
	public:
	Board();
	Board(const int& row, const int& column, const int& xStart, const int& yStart);
	~Board();
	bool isEmpty(const int&x , const int&y);	//returns if the location is empty, false if it reaches an edge
	void moveCell(const int& xFrom, const int& yFrom, const int& xDest, const int& yDest);
	//moves the cell, empties the original cell, invoked by the Block class
	void XwindowUpdate();						//updates the window
	friend std::ostream& operator<<(std::ostream&, const Board&);
};

#endif