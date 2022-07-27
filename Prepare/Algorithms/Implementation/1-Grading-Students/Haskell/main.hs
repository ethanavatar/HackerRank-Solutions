round :: Int -> Int
round x
    | x >= 38 && (mul - x) < 3 = mul
    | otherwise                = x
    where mul = x + (5 - x `mod` 5)

solve :: [Int] -> [Int]
solve xs = map round xs

main :: IO ()
main = interact $ unlines . map show . solve . map read . tail . words
