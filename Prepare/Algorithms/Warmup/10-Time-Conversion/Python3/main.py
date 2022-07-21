import re

time = input()
time_match = re.compile(r"^([01]?[0-9]):([0-5][0-9]):([0-5][0-9])(PM|AM)$")
hours = int(time_match.search(time).group(1))
minutes = int(time_match.search(time).group(2))
seconds = int(time_match.search(time).group(3))
ampm = time_match.search(time).group(4)

if ampm == "PM":
    if hours != 12:
        hours = int(hours) + 12
elif hours == 12:
        hours = 0
    
print(f"{hours:02}:{minutes:02}:{seconds:02}")