pipeline {
  agent any
  
  stages {
    stage('Build') {
      steps {
        sh 'cd HW_behaviour'
        sh 'gcc main.c operations.c -o outputRun'
        sh './outputRun'
      }
    }
    stage('Test') {
      steps {
        sh 'cd tester_behaviour'
        sh 'gcc main.c unity/unity.c test_operations.c ../HW_behaviour/operations.c -o outputTest'
        sh './outputTest'
      }
    }
  }
}
