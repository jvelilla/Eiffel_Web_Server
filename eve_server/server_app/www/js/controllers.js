'use strict';

/* Controllers */

var serverControllers = angular.module('mainControllers', []);


serverControllers.controller('MainCtrl',['$scope', '$http', 'CompileService','RunService','InterfaceViewService','FlatViewService','ContractViewService','ClassDescendantsService','ClassAncestorsService','ClassClientsService','ClassSuppliersService','FeatureCallersService',
  function($scope,$http,CompileService,RunService,InterfaceViewService,FlatViewService,ContractViewService,ClassDescendantsService,ClassAncestorsService,ClassSuppliersService,ClassClientsService,FeatureCallersService){
    $scope.message='Hi there';
    $scope.status_code=200;
    $scope.compile=function(){
        $scope.result=CompileService.query({id :$scope.project.id, clean:false, path: $scope.project.path, target: $scope.project.target}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            //console.log(response);
            //alert(response.status);
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.cleanCompile=function(){
        $scope.result=CompileService.query({id :$scope.project.id, clean:true, path:$scope.project.path, target: $scope.project.target}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.run_exe=function(){
        $scope.result=RunService.query({id :$scope.project.id}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_interface_view=function(){
        $scope.result=InterfaceViewService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
           $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_flat_view=function(){
        $scope.result=FlatViewService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_contract_view=function(){
        $scope.result=ContractViewService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_class_descendants=function(){
        $scope.result=ClassDescendantsService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_class_ancestors=function(){
        $scope.result=ClassAncestorsService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_class_clients=function(){
        $scope.result=ClassClientsService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_class_suppliers=function(){
        $scope.result=ClassSuppliersService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };

    $scope.get_feature_callers=function(){
        $scope.result=FeatureCallersService.query({id :$scope.project.id, class: $scope.project.class, feature: $scope.project.feature}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            alert("The process timed out!");
            $scope.dump=response;
        });
    };
}]);


