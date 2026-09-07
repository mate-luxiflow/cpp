#!/bin/bash

# 1. Create target folders
mkdir -p concepts practice build

# 2. Move all .cpp and .cc to concepts/
mv *.cpp *.cc concepts/ 2>/dev/null

# 3. Move practice projects to practice/
mv concepts/12_console_calc.cpp \
   concepts/15_temperature_conversion.cpp \
   concepts/24_num_gessing_game.cpp \
   concepts/29_banking_practice.cpp \
   concepts/30_rock-paper-scissors.cc \
   concepts/41_quiz_game.cc \
   concepts/45_credit_card_validator.cc \
   concepts/48_tictactoe.cpp \
   concepts/09_hypetnous_practice.cpp \
   practice/ 2>/dev/null

# 4. Move sub-directories into concepts/
for dir in 44_const_parameters 46_pointers 47_nullpointers 49_dynamic_memory 50_recursion; do
    if [ -d "$dir" ]; then
        mv "$dir" concepts/
    fi
done

# 5. Move all compiled .exe files to build/
mv *.exe build/ 2>/dev/null

echo "✅ Reorganization complete! Check concepts/, practice/, build/."
