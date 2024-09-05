# Problem Statement

Imagine Abhimanyu in Chakravyuha. There are 11 circles in the Chakravyuha surrounded by different enemies. Abhimanyu is located in the innermost circle and has to cross all the 11 circles to reach Pandavas army back. 
 
Given:
- Each circle is guarded by different enemy where enemy is equipped with k1, k2……k11 powers Abhmanyu start from the innermost circle with p power Abhimanyu has a boon to skip fighting enemy a times 
- Abhmanyu can recharge himself with power b times 
- Battling in each circle will result in loss of the same power from Abhimanyu as the enemy. 
- If Abhmanyu enter the circle with energy less than the respective enemy, he will lose the battle
- k3 and k7 enemies are endured with power to regenerate themselves once with half of their initial power and can attack Abhimanyu from behind if he is battling in iteratively next circle 
 
 
## Testcases

Initial Power: 18
Skips Available: 1
Recharges Available: 1
Powers: 1 2 3 10 4 5 10 6 7 8 9
Expected Output: NO

Initial Power: 40
Skips Available: 3
Recharges Available: 2
Powers: 2 4 6 8 10 12 14 16 18 20 22
Expected Output: YES
```bash
2
18 1 1
1 2 3 10 4 5 10 6 7 8 9

40 3 2 
2 4 6 8 10 12 14 16 18 20 22
```