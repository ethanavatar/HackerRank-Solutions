solve :: [Int] -> [Int]
solve arr = [a0 + a1 + a2, b0 + b1 + b2]
    where a0 = case (arr !! 0 > arr !! 3) of
            True -> 1
            False -> 0
          a1 = case (arr !! 1 > arr !! 4) of
            True -> 1
            False -> 0
          a2 = case (arr !! 2 > arr !! 5) of
            True -> 1
            False -> 0
          b0 = case (arr !! 0 < arr !! 3) of
            True -> 1
            False -> 0
          b1 = case (arr !! 1 < arr !! 4) of
            True -> 1
            False -> 0
          b2 = case (arr !! 2 < arr !! 5) of
            True -> 1
            False -> 0

main :: IO ()
main = interact $ unwords . map show . solve . map read . words
