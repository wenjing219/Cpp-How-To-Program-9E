/*
 * =====================================================================================
 *
 *       Filename:  Quiz.h
 *
 *    Description:  Exercise 5.30 - Global Warming Facts Quiz (Without the
 *                  global warming facts)
 *
 *        Version:  1.0
 *        Created:  08/04/16 15:41:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Question.h"

enum class GameStates{INIT, PLAY, EXIT};

const int NUM_QUESTIONS = 5;

class Quiz{
    private:
        std::vector<Question>       _questions;

        GameStates                  _currentState;

        int _correctAnswers;

    public:
        Quiz() :
            _currentState(GameStates::INIT),
            _correctAnswers(0)
        {};

        ~Quiz(){cleanup();}

        void run();

        bool initialise();
        bool setQuestions();

        void gameLoop();

        void askQuestion();

        int checkScore();

        void cleanup();
};
