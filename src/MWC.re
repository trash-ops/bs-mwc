module MaterialIcon = {
  [@bs.module "@material/react-material-icon"] [@react.component]
  external make:
    (~className: string=?, ~icon: string, ~hasRipple: bool=?) => React.element =
    "default";
};

module Button = {
  [@bs.module "@material/react-button"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~raised: bool=?,
      ~unelevated: bool=?,
      ~outlined: bool=?,
      ~dense: bool=?,
      ~disabled: bool=?,
      ~icon: React.element=?,
      ~trailingIcon: React.element=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

module AppBar = {
  [@bs.module "@material/react-top-app-bar"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~short: bool=?,
      ~shortCollapsed: bool=?,
      ~prominent: bool=?,
      ~fixed: bool=?,
      ~dense: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
  module Row = {
    [@bs.module "@material/react-top-app-bar"] [@react.component]
    external make:
      (~className: string=?, ~tag: string=?, ~children: React.element=?) =>
      React.element =
      "TopAppBarRow";
  };

  module Title = {
    [@bs.module "@material/react-top-app-bar"] [@react.component]
    external make:
      (~className: string=?, ~tag: string=?, ~children: React.element=?) =>
      React.element =
      "TopAppBarTitle";
  };

  module Section = {
    [@bs.module "@material/react-top-app-bar"] [@react.component]
    external make:
      (
        ~className: string=?,
        ~tag: string=?,
        ~align: string=?,
        ~children: React.element=?
      ) =>
      React.element =
      "TopAppBarSection";
  };
  module Icon = {
    [@bs.module "@material/react-top-app-bar"] [@react.component]
    external make:
      (
        ~className: string=?,
        ~actionItem: bool=?,
        ~navIcon: bool=?,
        ~children: React.element=?
      ) =>
      React.element =
      "TopAppBarIcon";
  };
  module FixedAdjust = {
    [@bs.module "@material/react-top-app-bar"] [@react.component]
    external make:
      (
        ~className: string=?,
        ~dense: bool=?,
        ~prominent: bool=?,
        ~short: bool=?,
        ~tag: string=?,
        ~children: React.element=?
      ) =>
      React.element =
      "TopAppBarIcon";
  };
};

module Drawer = {
  [@bs.module "@material/react-top-app-bar"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~onOpeen: bool=?,
      ~onClose: Function=?,
      ~modal: bool=?,
      ~dismissable: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "TopAppBarIcon";
};