pipeline {
  agent any
  
  stages {
    stage('Build') {
      steps {
        pipeline {
          bat 'cd HW_behaviour'
          bat 'gcc main.c operations.c -o outputRun'
        }
        bat 'cd tester_behaviour && gcc main.c unity/unity.c test_operations.c ../HW_behaviour/operations.c -o outputTest'
      }
    }
  }
}
