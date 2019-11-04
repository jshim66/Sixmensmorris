
#include <gtest/gtest.h>
#include "SixMensMorrisBoard.h"

TEST(SixMensMorrisBoardTest, DefaultBoardTest){
    // Needs to test that default board is correct
    CSixMensMorrisBoard Board;

    EXPECT_EQ(Board.PlayerTurn(), SIX_MENS_MORRIS_PLAYER_R);
    for(int Index = 0; Index < SIX_MENS_MORRIS_POSITIONS; Index++){
        Expect_EQ(Board.PlayerAtPosition(Index), SIX_MENS_MORRIS_EMPTY);
    }
    EXPECT_EQ(Board.UnplacedPieces(SIX_MENS_MORRIS_PLAYER_R), SIX_MENS_MORRIS_PIECES);
    EXPECT_EQ(Board.UnplacedPieces(SIX_MENS_MORRIS_PLAYER_W), SIX_MENS_MORRIS_PIECES);
    EXPECT_FALSE(Board.GameOver());
    EXPECT_EQ(std::string(Board));
    EXPECT_EQ(std::string(Board), Board.ToString());
    

    
}

TEST(SixMensMorrisBoardTest, SetBoardTest){
    // Needs to test that setting board is correct
    char Turn = SIX_MENS_MORRIS_PLAYER_W;
    int Unplaced[SIX_MENS_MORRIS_PLAYERS] = {2, 3};
    char Positions[SIX_MENS_MORRIS_POSITIONS] = {SIX_MENS_MORRIS_PLAYER_R,SIX_MENS_MORRIS_PLAYER_W,SIX_MENS_MORRIS_PLAYER_R,
                                                 SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,
                                                 SIX_MENS_MORRIS_PLAYER_W,SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_PLAYER_W,SIX_MENS_MORRIS_EMPTY,
                                                 SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,
                                                 SIX_MENS_MORRIS_PLAYER_R, ,SIX_MENS_MORRIS_PLAYER_R};
    char Previous[SIX_MENS_MORRIS_POSITIONS] = {SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_PLAYER_W,SIX_MENS_MORRIS_PLAYER_R,
                                                 SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,
                                                 SIX_MENS_MORRIS_PLAYER_W,SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_PLAYER_W,SIX_MENS_MORRIS_EMPTY,
                                                 SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,SIX_MENS_MORRIS_EMPTY,
                                                 SIX_MENS_MORRIS_PLAYER_R, ,SIX_MENS_MORRIS_PLAYER_R};
    CSixMensMorrisBoard Board(Turn, Unplaced, Positions, Previous);

    EXPECT_EQ(Board.PlayerTurn(), SIX_MENS_MORRIS_PLAYER_W);
    for(int Index = 0; Index < SIX_MENS_MORRIS_POSITIONS, Index++){
        EXPECT_EQ(Board.PlayerAtPosition(Index), Positions[Index]);
    }
    EXPECT_EQ(Board.UnplacedPieces(SIX_MENS_MORRIS_PLAYER_R), Unplaced[0]);
    EXPECT_EQ(Board.UnplacedPieces(SIX_MENS_MORRIS_PLAYER_W), Unplaced[1]);
    EXPECT_FALSE(Board.GameOver());
    EXPECT_EQ(std::string(Board));
    EXPECT_EQ(std::string(Board), Board.ToString());
    
}

TEST(SixMensMorrisBoardTest, ResetBoardTest){
    // Needs to test that resetting to default board is correct
}

TEST(SixMensMorrisBoardTest, PlacementTest){
    // Needs to test that normal placement is correct
}

TEST(SixMensMorrisBoardTest, PlacementMillTest){
    // Needs to test that placement creating a mill is correct with removal
}

TEST(SixMensMorrisBoardTest, MoveTest){
    // Needs to test that movement is correct
}

TEST(SixMensMorrisBoardTest, MoveMillTest){
    // Needs to test that movement creating a mill is correct with removal
}
                                       
TEST(SixMensMorrisBoardTest, TwoPieceGameOverTest){
    // Needs to test that game over is correct when only two pieces left
}

TEST(SixMensMorrisBoardTest, NoMoveGameOverTest){
    // Needs to test that game over is correct when no movement allowed
}

TEST(SixMensMorrisBoardTest, BadParametersTest){
    // Needs to test that correct return upon bad parameters
}


