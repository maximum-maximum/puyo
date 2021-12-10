#include <stdio.h>

int main(void)
{
	int i, j, k, l;
	int height;
	int score = 0;

	// パズルの高さの入力
	printf("高さを入力してください\n");
	scanf("%d", &height);

	int array[height][5];

	// パズルの成分の入力
	printf("各段の要素をそれぞれ入力してください\n");
	for (i = 0; i < height; i++)
	{
		scanf("%d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
	}

	// 落下
	for (l = 0; l < height; l++)
	{
		for (i = height - 1; i >= 0; i--)
		{
			if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][2] != array[i][3])
			{
				score += 3 * array[i][0];
				array[i][0] = 0, array[i][1] = 0, array[i][2] = 0;
			}
			else if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][2] == array[i][3] && array[i][3] != array[i][4])
			{
				score += 4 * array[i][0];
				array[i][0] = 0, array[i][1] = 0, array[i][2] = 0, array[i][3] = 0;
			}
			else if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][2] == array[i][3] && array[i][3] == array[i][4])
			{
				score += 5 * array[i][0];
				array[i][0] = 0, array[i][1] = 0, array[i][2] = 0, array[i][3] = 0, array[i][4] = 0;
			}
			else if (array[i][0] != array[i][1] && array[i][1] == array[i][2] && array[i][2] == array[i][3] && array[i][3] != array[i][4])
			{
				score += 3 * array[i][1];
				array[i][1] = 0, array[i][2] = 0, array[i][3] = 0;
			}
			else if (array[i][0] != array[i][1] && array[i][1] == array[i][2] && array[i][2] == array[i][3] && array[i][3] == array[i][4])
			{
				score += 4 * array[i][0];
				array[i][1] = 0, array[i][2] = 0, array[i][3] = 0, array[i][4] = 0;
			}
			else if (array[i][1] != array[i][2] && array[i][2] == array[i][3] && array[i][3] == array[i][4])
			{
				score += *array[i][2];
				array[i][2] = 0, array[i][3] = 0, array[i][4] = 0;
			}
		}
		for (k = 0; k < height; k++)
		{
			for (i = height - 1; i > 0; i--)
			{
				for (j = 0; j < 5; j++)
				{
					if (array[i][j] == 0)
					{
						array[i][j] = array[i - 1][j];
						array[i - 1][j] = 0;
					}
				}
			}
		}
	}

	// パズルの最終状態とスコアの出力
	printf("最終状態は\n");
	for (i = 0; i < height; i++)
	{
		printf("%d %d %d %d %d", array[i][0], array[i][1], array[i][2], array[i][3], array[i][4]);
		printf("\n");
	}
	printf("で\nスコアは%dです\n", score);
	return 0;
}
