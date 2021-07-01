print('                  BMI CALCULATOR')
name = input('What is your name?')
weight = float(input('What is your weight (in Kgs)?'))
height = float(input('What is your height (in meters)?'))
bmi = weight / (height ** 2)

if bmi<18.5:
    print(f"\n{name} is underweight by {bmi} BMI")
    print('Eat foods containing high portion of fats and carbohydrates')
elif 18.5<bmi<24.9:
    print(f"\n{name} has normal weight by {bmi} BMI")
    print('You are living a healthy life and !!!KEEP IT UP!!!')
elif 25.0<bmi<29.9:
    print(f"\n{name} is overweight by {bmi} BMI")
    print('\nEat foods containing less amount of fats and carbohydrates and do regular exercise.')
else:print(f"\n{name} is obese by {bmi} BMI.\nRegular exercise is very important for you & consult a dietician to plan your diet.")
print('\n                        ||||||||||  THANK YOU   ||||||||||')



