pipeline {
  agent any
  
  stages {
    stage('Build') {
      steps {
        bat 'cd HW_behaviour && gcc main.c operations.c -o outputRun'
      }
      steps {
        bat 'cd tester_behaviour && gcc main.c unity/unity.c test_operations.c ../HW_behaviour/operations.c -o outputTest'
      }
    }
    stage('Test') {
      steps {
        bat 'cd HW_behaviour && outputRun.exe'
      }
      steps {
        bat 'cd tester_behaviour && outputTest.exe'
      }
    }
  }
}
