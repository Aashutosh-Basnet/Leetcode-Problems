def canJump(nums):
    n = len(nums)
    dp = [False]*n
    dp[0] = True

    for i in range(n):
        if dp[i]:
            for j in range(n):
                if i + j < n:
                    dp[i + j] = True

    return dp[-1]