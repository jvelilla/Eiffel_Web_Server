'use strict';

/* App Module */

var serverApp = angular.module('serverApp', [
  'ngRoute',
  'mainControllers',
  'ngResource',
]);

serverApp.config(['$routeProvider','$locationProvider',
  function($routeProvider,$locationProvider) {
    $routeProvider.
      when('/', {
        templateUrl: 'partials/home-page.html',
        controller: 'MainCtrl'
      }).
      otherwise({
        redirectTo: '/'
      });
      $locationProvider.html5Mode(true);
  }]);


serverApp.factory('CompileService', function($resource) {
  return $resource('/compile',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('RunService', function($resource) {
  return $resource('/run',{}, {query: {method:'GET', isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('InterfaceViewService', function($resource) {
  return $resource('/interfaceView',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('FlatViewService', function($resource) {
  return $resource('/flatView',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ContractViewService', function($resource) {
  return $resource('/contractView',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ClassDescendantsService', function($resource) {
  return $resource('/classDescendants',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});