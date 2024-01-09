# [Problem C: Car Racing](https://nbhspc21.kattis.com/contests/nbhspc21/problems/nbhspc21.carracing)

You have a favorite car racing video game, which you have played many times. For simplicity, we will assume that the race is always on the same track, and that you always compete with 15 other players. At the beginning of the game, you have to choose a car for the race. There are 5 such cars, and they differ in the maximum speed they can go and how well they grip the road when turning. You start to wonder: is there a car that I am better handling, that increases my chance of winning the game? So you decide to analyze the results of your last games in order to answer this question.

Using this data, you want to calculate which car gives you the best average finishing position among the participants.

For the example below, here is how the calculations would be made:

car 1: average = (6 + 8)/2 = 7

car 2: average = (10)/1 = 10

car 3: average = (1 + 7 + 6)/3 = 4.66 -> 4 when truncated

car 4: average = (4 + 3)/2 = 3.5 -> 3 when truncated

car 5: average = (3 + 11)/2 = 7

So the best is car 4, with an average of 3.

Note: we guarantee that each car has been used at least once, and that there will be no tie in the highest average position (after truncating).

## Input
The input starts with a positive integer that indicates the number of games you have already played. Then you have n lines, one per game, each containing 2 positive numbers. First is a number between 1 and 5 representing which car you used for that game. Second is a number between 1 and 16, representing your position (among the 16 participants) at the end of the game.

## Output
The output is two lines, each containing an integer. The first line contains the number of the best car (from 1-5), and the second line contains this car’s average position (as an integer: truncate the decimal places).

## Sample Input 1
```
10
1 6
3 1
3 7
5 3
2 10
1 8
4 4
4 3
3 6
5 11
```

## Sample Output 1
```
4
3
```
