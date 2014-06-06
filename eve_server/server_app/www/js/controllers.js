'use strict';

/* Controllers */

var serverControllers = angular.module('mainControllers', []);

//var serverApp=angular.module('serverApp',[]);

/*serverApp.controller('MainCtrl',function($scope){
  $scope.message="Hi there";
  $scope.compile
});*/

serverControllers.controller('MainCtrl',['$scope', '$http', 'CompileService','RunService','InterfaceViewService','FlatViewService','ContractViewService','ClassDescendantsService',
  function($scope,$http,CompileService,RunService,InterfaceViewService,FlatViewService,ContractViewService,ClassDescendantsService){
    $scope.message='Hi there';
    
      $scope.compile=function(){
        $scope.compile_result=CompileService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3", clean:false, path:""});
    };

    $scope.cleanCompile=function(){
        $scope.compile_result=CompileService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3", clean:true, path:"C:/Users/Manav/Desktop/eve_server/sample/sample.ecf"});
    };

    $scope.run_exe=function(){
          $scope.run_result=RunService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3"});
    };

    $scope.get_interface_view=function(){
        $scope.interface_view_result=InterfaceViewService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3", class:"APPLICATION"});
    };

     $scope.get_flat_view=function(){
        $scope.flat_view_result=FlatViewService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3", class:"APPLICATION"});
    };

     $scope.get_contract_view=function(){
        $scope.contract_view_result=ContractViewService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3", class:"ACCOUNT"});
    };

     $scope.get_class_descendants=function(){
        $scope.class_descendants_result=ClassDescendantsService.query({id :"AB01D9AC-018D-4A33-8781-DCC8A097C2B3", class:"APPLICATION"});
    };

  }]);