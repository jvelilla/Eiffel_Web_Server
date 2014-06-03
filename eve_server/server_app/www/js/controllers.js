'use strict';

/* Controllers */

var serverControllers = angular.module('mainControllers', []);

//var serverApp=angular.module('serverApp',[]);

/*serverApp.controller('MainCtrl',function($scope){
  $scope.message="Hi there";
  $scope.compile
});*/

serverControllers.controller('MainCtrl',['$scope', '$http', 'CompileService','FileService','RunService','InterfaceViewService','FlatViewService','ContractViewService','ClassDescendantsService','ErrorService','WarningService','RuntimeService','CleanCompileService',
  function($scope,$http,CompileService,FileService,RunService,InterfaceViewService,FlatViewService,ContractViewService,ClassDescendantsService,ErrorService,WarningService,RuntimeService,CleanCompileService){
    $scope.message='Hi there';
    $scope.compile=function(){
      FileService.save($scope.file,function(){
          $scope.compile_result=CompileService.query(function(){
            $scope.error_list=ErrorService.query();
            $scope.warning_list=WarningService.query();
          });
      })
    };

    $scope.cleanCompile=function(){
      FileService.save($scope.file,function(){
          $scope.compile_result=CleanCompileService.query(function(){
            $scope.error_list=ErrorService.query();
            $scope.warning_list=WarningService.query();
          });
      })
    };

    $scope.run_exe=function(){
      FileService.save($scope.file,function(){
          $scope.run_result=RunService.query(function(){
            $scope.error_list=ErrorService.query();
            $scope.warning_list=WarningService.query();
            $scope.runtime_error_list=RuntimeService.query();
          });
      })
    };

    $scope.get_interface_view=function(){
      FileService.save($scope.file,function(){
          $scope.interface_view_result=InterfaceViewService.query();
      })
    };

     $scope.get_flat_view=function(){
      FileService.save($scope.file,function(){
          $scope.flat_view_result=FlatViewService.query();
      })
    };

     $scope.get_contract_view=function(){
      FileService.save($scope.file,function(){
          $scope.contract_view_result=ContractViewService.query();
      })
    };

     $scope.get_class_descendants=function(){
      FileService.save($scope.file,function(){
          $scope.class_descendants_result=ClassDescendantsService.query();
      })
    };
  }]);