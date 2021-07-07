// The Ternary Operator Longhand //

const x = 20
let answer

if (x > 10) {
  answer = 'greater than 10'
} else {
  answer = 'less than 10'
}

// The Ternary Operator Shorthand //
const answer = x > 10 ? 'greater than 10' : 'less than 10'

// Short-circuit Evaluation Longhand //
if (variable1 !== null || variable1 !== undefined || variable1 !== '') {
  let variable2 = variable1
}

// Short-circuit Evaluation Shorthand //
const variable2 = variable1 || 'new'
