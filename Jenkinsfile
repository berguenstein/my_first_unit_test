pipeline {
  agent any
  
  stages {
    stage('Build') {
      steps {
        bat 'cd HW_behaviour && gcc main.c operations.c -o outputRun'
        bat 'cd tester_behaviour && gcc main.c unity/unity.c test_operations.c ../HW_behaviour/operations.c -o outputTest'
      }
    }
    stage('Run') {
      steps {
        bat 'cd HW_behaviour && outputRun.exe'
        bat 'cd tester_behaviour && outputTest.exe'
      }
    }
  }
}
